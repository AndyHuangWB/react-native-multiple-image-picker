///
/// JFunc_void_CameraResult.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include <functional>

#include <functional>
#include "CameraResult.hpp"
#include "JCameraResult.hpp"
#include <string>

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * C++ representation of the callback Func_void_CameraResult.
   * This is a Kotlin `(result: CameraResult) -> Unit`, backed by a `std::function<...>`.
   */
  struct JFunc_void_CameraResult final: public jni::HybridClass<JFunc_void_CameraResult> {
  public:
    static jni::local_ref<JFunc_void_CameraResult::javaobject> fromCpp(const std::function<void(const CameraResult& /* result */)>& func) {
      return JFunc_void_CameraResult::newObjectCxxArgs(func);
    }

  public:
    void call(jni::alias_ref<JCameraResult> result) {
      return _func(result->toCpp());
    }

  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/Func_void_CameraResult;";
    static void registerNatives() {
      registerHybrid({makeNativeMethod("call", JFunc_void_CameraResult::call)});
    }

  private:
    explicit JFunc_void_CameraResult(const std::function<void(const CameraResult& /* result */)>& func): _func(func) { }

  private:
    friend HybridBase;
    std::function<void(const CameraResult& /* result */)> _func;
  };

} // namespace margelo::nitro::multipleimagepicker
