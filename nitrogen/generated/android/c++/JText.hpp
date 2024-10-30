///
/// JText.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "Text.hpp"

#include <optional>
#include <string>

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "Text" and the the Kotlin data class "Text".
   */
  struct JText final: public jni::JavaClass<JText> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/Text;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct Text by copying all values to C++.
     */
    [[maybe_unused]]
    Text toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldFinish = clazz->getField<jni::JString>("finish");
      jni::local_ref<jni::JString> finish = this->getFieldValue(fieldFinish);
      static const auto fieldOriginal = clazz->getField<jni::JString>("original");
      jni::local_ref<jni::JString> original = this->getFieldValue(fieldOriginal);
      static const auto fieldPreview = clazz->getField<jni::JString>("preview");
      jni::local_ref<jni::JString> preview = this->getFieldValue(fieldPreview);
      return Text(
        finish != nullptr ? std::make_optional(finish->toStdString()) : std::nullopt,
        original != nullptr ? std::make_optional(original->toStdString()) : std::nullopt,
        preview != nullptr ? std::make_optional(preview->toStdString()) : std::nullopt
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JText::javaobject> fromCpp(const Text& value) {
      return newInstance(
        value.finish.has_value() ? jni::make_jstring(value.finish.value()) : nullptr,
        value.original.has_value() ? jni::make_jstring(value.original.value()) : nullptr,
        value.preview.has_value() ? jni::make_jstring(value.preview.value()) : nullptr
      );
    }
  };

} // namespace margelo::nitro::multipleimagepicker