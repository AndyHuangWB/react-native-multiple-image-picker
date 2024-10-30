///
/// JMediaType.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "MediaType.hpp"

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "MediaType" and the the Kotlin enum "MediaType".
   */
  struct JMediaType final: public jni::JavaClass<JMediaType> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/MediaType;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum MediaType.
     */
    [[maybe_unused]]
    MediaType toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<MediaType>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JMediaType> fromCpp(MediaType value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldVIDEO = clazz->getStaticField<JMediaType>("VIDEO");
      static const auto fieldIMAGE = clazz->getStaticField<JMediaType>("IMAGE");
      static const auto fieldALL = clazz->getStaticField<JMediaType>("ALL");
      
      switch (value) {
        case MediaType::VIDEO:
          return clazz->getStaticFieldValue(fieldVIDEO);
        case MediaType::IMAGE:
          return clazz->getStaticFieldValue(fieldIMAGE);
        case MediaType::ALL:
          return clazz->getStaticFieldValue(fieldALL);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::invalid_argument("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::multipleimagepicker