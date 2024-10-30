///
/// NitroConfig.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `MediaType` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class MediaType; }
// Forward declaration of `Result` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct Result; }
// Forward declaration of `SelectBoxStyle` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class SelectBoxStyle; }
// Forward declaration of `SelectMode` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class SelectMode; }
// Forward declaration of `Presentation` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Presentation; }
// Forward declaration of `PickerCropConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct PickerCropConfig; }
// Forward declaration of `Text` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct Text; }
// Forward declaration of `Language` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Language; }

#include "MediaType.hpp"
#include <vector>
#include "Result.hpp"
#include "SelectBoxStyle.hpp"
#include "SelectMode.hpp"
#include <optional>
#include "Presentation.hpp"
#include "PickerCropConfig.hpp"
#include "Text.hpp"
#include "Language.hpp"

namespace margelo::nitro::multipleimagepicker {

  /**
   * A struct which can be represented as a JavaScript object (NitroConfig).
   */
  struct NitroConfig {
  public:
    MediaType mediaType     SWIFT_PRIVATE;
    std::vector<Result> selectedAssets     SWIFT_PRIVATE;
    SelectBoxStyle selectBoxStyle     SWIFT_PRIVATE;
    SelectMode selectMode     SWIFT_PRIVATE;
    std::optional<double> numberOfColumn     SWIFT_PRIVATE;
    std::optional<bool> isPreview     SWIFT_PRIVATE;
    std::optional<double> primaryColor     SWIFT_PRIVATE;
    std::optional<bool> allowedCamera     SWIFT_PRIVATE;
    std::optional<bool> allowSwipeToSelect     SWIFT_PRIVATE;
    std::optional<double> spacing     SWIFT_PRIVATE;
    std::optional<bool> isHiddenPreviewButton     SWIFT_PRIVATE;
    std::optional<bool> isHiddenOriginalButton     SWIFT_PRIVATE;
    std::optional<bool> isShowPreviewList     SWIFT_PRIVATE;
    std::optional<bool> allowHapticTouchPreview     SWIFT_PRIVATE;
    std::optional<bool> isShowAssetNumber     SWIFT_PRIVATE;
    std::optional<bool> allowedLimit     SWIFT_PRIVATE;
    std::optional<double> maxPhoto     SWIFT_PRIVATE;
    std::optional<double> maxVideo     SWIFT_PRIVATE;
    std::optional<double> maxSelect     SWIFT_PRIVATE;
    std::optional<double> maxVideoDuration     SWIFT_PRIVATE;
    std::optional<double> minVideoDuration     SWIFT_PRIVATE;
    std::optional<double> maxFileSize     SWIFT_PRIVATE;
    std::optional<double> videoQuality     SWIFT_PRIVATE;
    std::optional<double> imageQuality     SWIFT_PRIVATE;
    Presentation presentation     SWIFT_PRIVATE;
    std::optional<PickerCropConfig> crop     SWIFT_PRIVATE;
    std::optional<Text> text     SWIFT_PRIVATE;
    Language language     SWIFT_PRIVATE;

  public:
    explicit NitroConfig(MediaType mediaType, std::vector<Result> selectedAssets, SelectBoxStyle selectBoxStyle, SelectMode selectMode, std::optional<double> numberOfColumn, std::optional<bool> isPreview, std::optional<double> primaryColor, std::optional<bool> allowedCamera, std::optional<bool> allowSwipeToSelect, std::optional<double> spacing, std::optional<bool> isHiddenPreviewButton, std::optional<bool> isHiddenOriginalButton, std::optional<bool> isShowPreviewList, std::optional<bool> allowHapticTouchPreview, std::optional<bool> isShowAssetNumber, std::optional<bool> allowedLimit, std::optional<double> maxPhoto, std::optional<double> maxVideo, std::optional<double> maxSelect, std::optional<double> maxVideoDuration, std::optional<double> minVideoDuration, std::optional<double> maxFileSize, std::optional<double> videoQuality, std::optional<double> imageQuality, Presentation presentation, std::optional<PickerCropConfig> crop, std::optional<Text> text, Language language): mediaType(mediaType), selectedAssets(selectedAssets), selectBoxStyle(selectBoxStyle), selectMode(selectMode), numberOfColumn(numberOfColumn), isPreview(isPreview), primaryColor(primaryColor), allowedCamera(allowedCamera), allowSwipeToSelect(allowSwipeToSelect), spacing(spacing), isHiddenPreviewButton(isHiddenPreviewButton), isHiddenOriginalButton(isHiddenOriginalButton), isShowPreviewList(isShowPreviewList), allowHapticTouchPreview(allowHapticTouchPreview), isShowAssetNumber(isShowAssetNumber), allowedLimit(allowedLimit), maxPhoto(maxPhoto), maxVideo(maxVideo), maxSelect(maxSelect), maxVideoDuration(maxVideoDuration), minVideoDuration(minVideoDuration), maxFileSize(maxFileSize), videoQuality(videoQuality), imageQuality(imageQuality), presentation(presentation), crop(crop), text(text), language(language) {}
  };

} // namespace margelo::nitro::multipleimagepicker

namespace margelo::nitro {

  using namespace margelo::nitro::multipleimagepicker;

  // C++ NitroConfig <> JS NitroConfig (object)
  template <>
  struct JSIConverter<NitroConfig> {
    static inline NitroConfig fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      jsi::Object obj = arg.asObject(runtime);
      return NitroConfig(
        JSIConverter<MediaType>::fromJSI(runtime, obj.getProperty(runtime, "mediaType")),
        JSIConverter<std::vector<Result>>::fromJSI(runtime, obj.getProperty(runtime, "selectedAssets")),
        JSIConverter<SelectBoxStyle>::fromJSI(runtime, obj.getProperty(runtime, "selectBoxStyle")),
        JSIConverter<SelectMode>::fromJSI(runtime, obj.getProperty(runtime, "selectMode")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "numberOfColumn")),
        JSIConverter<std::optional<bool>>::fromJSI(runtime, obj.getProperty(runtime, "isPreview")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "primaryColor")),
        JSIConverter<std::optional<bool>>::fromJSI(runtime, obj.getProperty(runtime, "allowedCamera")),
        JSIConverter<std::optional<bool>>::fromJSI(runtime, obj.getProperty(runtime, "allowSwipeToSelect")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "spacing")),
        JSIConverter<std::optional<bool>>::fromJSI(runtime, obj.getProperty(runtime, "isHiddenPreviewButton")),
        JSIConverter<std::optional<bool>>::fromJSI(runtime, obj.getProperty(runtime, "isHiddenOriginalButton")),
        JSIConverter<std::optional<bool>>::fromJSI(runtime, obj.getProperty(runtime, "isShowPreviewList")),
        JSIConverter<std::optional<bool>>::fromJSI(runtime, obj.getProperty(runtime, "allowHapticTouchPreview")),
        JSIConverter<std::optional<bool>>::fromJSI(runtime, obj.getProperty(runtime, "isShowAssetNumber")),
        JSIConverter<std::optional<bool>>::fromJSI(runtime, obj.getProperty(runtime, "allowedLimit")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "maxPhoto")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "maxVideo")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "maxSelect")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "maxVideoDuration")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "minVideoDuration")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "maxFileSize")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "videoQuality")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "imageQuality")),
        JSIConverter<Presentation>::fromJSI(runtime, obj.getProperty(runtime, "presentation")),
        JSIConverter<std::optional<PickerCropConfig>>::fromJSI(runtime, obj.getProperty(runtime, "crop")),
        JSIConverter<std::optional<Text>>::fromJSI(runtime, obj.getProperty(runtime, "text")),
        JSIConverter<Language>::fromJSI(runtime, obj.getProperty(runtime, "language"))
      );
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, const NitroConfig& arg) {
      jsi::Object obj(runtime);
      obj.setProperty(runtime, "mediaType", JSIConverter<MediaType>::toJSI(runtime, arg.mediaType));
      obj.setProperty(runtime, "selectedAssets", JSIConverter<std::vector<Result>>::toJSI(runtime, arg.selectedAssets));
      obj.setProperty(runtime, "selectBoxStyle", JSIConverter<SelectBoxStyle>::toJSI(runtime, arg.selectBoxStyle));
      obj.setProperty(runtime, "selectMode", JSIConverter<SelectMode>::toJSI(runtime, arg.selectMode));
      obj.setProperty(runtime, "numberOfColumn", JSIConverter<std::optional<double>>::toJSI(runtime, arg.numberOfColumn));
      obj.setProperty(runtime, "isPreview", JSIConverter<std::optional<bool>>::toJSI(runtime, arg.isPreview));
      obj.setProperty(runtime, "primaryColor", JSIConverter<std::optional<double>>::toJSI(runtime, arg.primaryColor));
      obj.setProperty(runtime, "allowedCamera", JSIConverter<std::optional<bool>>::toJSI(runtime, arg.allowedCamera));
      obj.setProperty(runtime, "allowSwipeToSelect", JSIConverter<std::optional<bool>>::toJSI(runtime, arg.allowSwipeToSelect));
      obj.setProperty(runtime, "spacing", JSIConverter<std::optional<double>>::toJSI(runtime, arg.spacing));
      obj.setProperty(runtime, "isHiddenPreviewButton", JSIConverter<std::optional<bool>>::toJSI(runtime, arg.isHiddenPreviewButton));
      obj.setProperty(runtime, "isHiddenOriginalButton", JSIConverter<std::optional<bool>>::toJSI(runtime, arg.isHiddenOriginalButton));
      obj.setProperty(runtime, "isShowPreviewList", JSIConverter<std::optional<bool>>::toJSI(runtime, arg.isShowPreviewList));
      obj.setProperty(runtime, "allowHapticTouchPreview", JSIConverter<std::optional<bool>>::toJSI(runtime, arg.allowHapticTouchPreview));
      obj.setProperty(runtime, "isShowAssetNumber", JSIConverter<std::optional<bool>>::toJSI(runtime, arg.isShowAssetNumber));
      obj.setProperty(runtime, "allowedLimit", JSIConverter<std::optional<bool>>::toJSI(runtime, arg.allowedLimit));
      obj.setProperty(runtime, "maxPhoto", JSIConverter<std::optional<double>>::toJSI(runtime, arg.maxPhoto));
      obj.setProperty(runtime, "maxVideo", JSIConverter<std::optional<double>>::toJSI(runtime, arg.maxVideo));
      obj.setProperty(runtime, "maxSelect", JSIConverter<std::optional<double>>::toJSI(runtime, arg.maxSelect));
      obj.setProperty(runtime, "maxVideoDuration", JSIConverter<std::optional<double>>::toJSI(runtime, arg.maxVideoDuration));
      obj.setProperty(runtime, "minVideoDuration", JSIConverter<std::optional<double>>::toJSI(runtime, arg.minVideoDuration));
      obj.setProperty(runtime, "maxFileSize", JSIConverter<std::optional<double>>::toJSI(runtime, arg.maxFileSize));
      obj.setProperty(runtime, "videoQuality", JSIConverter<std::optional<double>>::toJSI(runtime, arg.videoQuality));
      obj.setProperty(runtime, "imageQuality", JSIConverter<std::optional<double>>::toJSI(runtime, arg.imageQuality));
      obj.setProperty(runtime, "presentation", JSIConverter<Presentation>::toJSI(runtime, arg.presentation));
      obj.setProperty(runtime, "crop", JSIConverter<std::optional<PickerCropConfig>>::toJSI(runtime, arg.crop));
      obj.setProperty(runtime, "text", JSIConverter<std::optional<Text>>::toJSI(runtime, arg.text));
      obj.setProperty(runtime, "language", JSIConverter<Language>::toJSI(runtime, arg.language));
      return obj;
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isObject()) {
        return false;
      }
      jsi::Object obj = value.getObject(runtime);
      if (!JSIConverter<MediaType>::canConvert(runtime, obj.getProperty(runtime, "mediaType"))) return false;
      if (!JSIConverter<std::vector<Result>>::canConvert(runtime, obj.getProperty(runtime, "selectedAssets"))) return false;
      if (!JSIConverter<SelectBoxStyle>::canConvert(runtime, obj.getProperty(runtime, "selectBoxStyle"))) return false;
      if (!JSIConverter<SelectMode>::canConvert(runtime, obj.getProperty(runtime, "selectMode"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "numberOfColumn"))) return false;
      if (!JSIConverter<std::optional<bool>>::canConvert(runtime, obj.getProperty(runtime, "isPreview"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "primaryColor"))) return false;
      if (!JSIConverter<std::optional<bool>>::canConvert(runtime, obj.getProperty(runtime, "allowedCamera"))) return false;
      if (!JSIConverter<std::optional<bool>>::canConvert(runtime, obj.getProperty(runtime, "allowSwipeToSelect"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "spacing"))) return false;
      if (!JSIConverter<std::optional<bool>>::canConvert(runtime, obj.getProperty(runtime, "isHiddenPreviewButton"))) return false;
      if (!JSIConverter<std::optional<bool>>::canConvert(runtime, obj.getProperty(runtime, "isHiddenOriginalButton"))) return false;
      if (!JSIConverter<std::optional<bool>>::canConvert(runtime, obj.getProperty(runtime, "isShowPreviewList"))) return false;
      if (!JSIConverter<std::optional<bool>>::canConvert(runtime, obj.getProperty(runtime, "allowHapticTouchPreview"))) return false;
      if (!JSIConverter<std::optional<bool>>::canConvert(runtime, obj.getProperty(runtime, "isShowAssetNumber"))) return false;
      if (!JSIConverter<std::optional<bool>>::canConvert(runtime, obj.getProperty(runtime, "allowedLimit"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "maxPhoto"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "maxVideo"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "maxSelect"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "maxVideoDuration"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "minVideoDuration"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "maxFileSize"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "videoQuality"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "imageQuality"))) return false;
      if (!JSIConverter<Presentation>::canConvert(runtime, obj.getProperty(runtime, "presentation"))) return false;
      if (!JSIConverter<std::optional<PickerCropConfig>>::canConvert(runtime, obj.getProperty(runtime, "crop"))) return false;
      if (!JSIConverter<std::optional<Text>>::canConvert(runtime, obj.getProperty(runtime, "text"))) return false;
      if (!JSIConverter<Language>::canConvert(runtime, obj.getProperty(runtime, "language"))) return false;
      return true;
    }
  };

} // namespace margelo::nitro