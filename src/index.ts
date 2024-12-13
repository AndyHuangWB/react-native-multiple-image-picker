export * from './specs/MultipleImagePicker.nitro'
export * from './types'

import { NitroModules } from 'react-native-nitro-modules'

import { type MultipleImagePicker } from './specs/MultipleImagePicker.nitro'

import { processColor, Appearance } from 'react-native'

import {
  Result,
  Config,
  NitroConfig,
  CropResult,
  CropConfig,
  NitroCropConfig,
  CropRatio,
  PreviewConfig,
  NitroPreviewConfig,
  MediaPreview,
  NitroCameraConfig,
  CameraResult,
  CameraConfig,
} from './types'
import { CropError } from './types/error'

const Picker = NitroModules.createHybridObject<MultipleImagePicker>(
  'MultipleImagePicker'
)

type IPromisePicker<T extends Config> = T['selectMode'] extends 'single'
  ? Result
  : Result[]

export async function openPicker<T extends Config>(
  conf: T
): Promise<IPromisePicker<T>> {
  const config = { ...defaultOptions, ...conf } as NitroConfig
  config.primaryColor = processColor(config.primaryColor) as any
  config.backgroundDark = processColor(config.backgroundDark) as any

  if ((config as Config)?.theme === 'system') {
    const theme = Appearance.getColorScheme() ?? 'light'
    config.theme = theme
  }

  if (config?.language && !LANGUAGES.includes(config.language)) {
    config.language = 'system'
  }

  if (config.crop) config.crop.ratio = config.crop.ratio ?? []

  return new Promise((resolved, rejected) => {
    return Picker.openPicker(
      config,
      (result: Result[]) => {
        resolved(result as IPromisePicker<T>)
      },
      (reject: number) => {
        rejected(reject)
      }
    )
  })
}

export async function openCropper(
  image: string,
  config?: CropConfig
): Promise<CropResult> {
  const cropConfig = {
    presentation: 'fullScreenModal',
    language: 'system',
    ratio: [],
    ...config,
  } as NitroCropConfig

  if (config?.language && !LANGUAGES.includes(config.language)) {
    config.language = 'system'
  }

  return new Promise((resolved, rejected) => {
    Picker.openCrop(
      image,
      cropConfig,
      (result: CropResult) => {
        resolved(result)
      },
      (error: CropError) => {
        rejected(error)
      }
    )
  })
}

export function openPreview(
  media: MediaPreview[] | Result[],
  index: number = 0,
  conf: PreviewConfig
): void {
  const config: PreviewConfig = {
    language: conf.language ?? 'system',
    ...conf,
  }

  if (config?.language && !LANGUAGES.includes(config.language)) {
    config.language = 'system'
  }

  if (media.length === 0) {
    throw new Error('Media is required')
  }

  Picker.openPreview(
    media as MediaPreview[],
    index,
    config as NitroPreviewConfig
  )
}

export async function openCamera(conf: CameraConfig) {
  const config: CameraConfig = {
    language: conf.language ?? 'system',
    mediaType: 'all',
    presentation: 'fullScreenModal',
    cameraType: 'custom',
    ...conf,
  }

  if (config?.language && !LANGUAGES.includes(config.language)) {
    config.language = 'system'
  }

  return new Promise((resolved, rejected) => {
    Picker.openCamera(
      config as NitroCameraConfig,
      (result: CameraResult) => {
        resolved(result)
      },
      (error: number) => {
        rejected(error)
      }
    )
  })
}

const DEFAULT_COUNT = 20

export const DEFAULT_RATIO: CropRatio[] = []

export const defaultOptions: Config = {
  maxSelect: DEFAULT_COUNT,
  maxVideo: DEFAULT_COUNT,
  primaryColor: '#FB9300',
  backgroundDark: '#2f2f2f',
  allowedCamera: true,
  allowedLimit: true,
  numberOfColumn: 3,
  isPreview: true,
  mediaType: 'all',
  selectedAssets: [],
  selectBoxStyle: 'number',
  selectMode: 'multiple',
  presentation: 'fullScreenModal',
  language: 'system',
  theme: 'system',
  isHiddenOriginalButton: false,
  allowSwipeToSelect: true,
}

const LANGUAGES = [
  'system',
  'zh-Hans',
  'zh-Hant',
  'ja',
  'ko',
  'en',
  'th',
  'id',
  'vi',
  'ru',
  'de',
  'fr',
  'ar',
] as const
