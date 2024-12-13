///
/// JNitroCameraConfig.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "NitroCameraConfig.hpp"

#include "CropRatio.hpp"
#include "JCropRatio.hpp"
#include "JLanguage.hpp"
#include "JMediaType.hpp"
#include "JPickerCropConfig.hpp"
#include "JPresentation.hpp"
#include "Language.hpp"
#include "MediaType.hpp"
#include "PickerCropConfig.hpp"
#include "Presentation.hpp"
#include <optional>
#include <string>
#include <vector>

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "NitroCameraConfig" and the the Kotlin data class "NitroCameraConfig".
   */
  struct JNitroCameraConfig final: public jni::JavaClass<JNitroCameraConfig> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/NitroCameraConfig;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct NitroCameraConfig by copying all values to C++.
     */
    [[maybe_unused]]
    NitroCameraConfig toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldMediaType = clazz->getField<JMediaType>("mediaType");
      jni::local_ref<JMediaType> mediaType = this->getFieldValue(fieldMediaType);
      static const auto fieldLanguage = clazz->getField<JLanguage>("language");
      jni::local_ref<JLanguage> language = this->getFieldValue(fieldLanguage);
      static const auto fieldPresentation = clazz->getField<JPresentation>("presentation");
      jni::local_ref<JPresentation> presentation = this->getFieldValue(fieldPresentation);
      static const auto fieldAllowsEditing = clazz->getField<jni::JBoolean>("allowsEditing");
      jni::local_ref<jni::JBoolean> allowsEditing = this->getFieldValue(fieldAllowsEditing);
      static const auto fieldCrop = clazz->getField<JPickerCropConfig>("crop");
      jni::local_ref<JPickerCropConfig> crop = this->getFieldValue(fieldCrop);
      return NitroCameraConfig(
        mediaType->toCpp(),
        language->toCpp(),
        presentation->toCpp(),
        allowsEditing != nullptr ? std::make_optional(static_cast<bool>(allowsEditing->value())) : std::nullopt,
        crop != nullptr ? std::make_optional(crop->toCpp()) : std::nullopt
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JNitroCameraConfig::javaobject> fromCpp(const NitroCameraConfig& value) {
      return newInstance(
        JMediaType::fromCpp(value.mediaType),
        JLanguage::fromCpp(value.language),
        JPresentation::fromCpp(value.presentation),
        value.allowsEditing.has_value() ? jni::JBoolean::valueOf(value.allowsEditing.value()) : nullptr,
        value.crop.has_value() ? JPickerCropConfig::fromCpp(value.crop.value()) : nullptr
      );
    }
  };

} // namespace margelo::nitro::multipleimagepicker
