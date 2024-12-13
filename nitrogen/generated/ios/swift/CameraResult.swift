///
/// CameraResult.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `CameraResult`, backed by a C++ struct.
 */
public typealias CameraResult = margelo.nitro.multipleimagepicker.CameraResult

public extension CameraResult {
  private typealias bridge = margelo.nitro.multipleimagepicker.bridge.swift

  /**
   * Create a new instance of `CameraResult`.
   */
  init(path: String) {
    self.init(std.string(path))
  }

  var path: String {
    @inline(__always)
    get {
      return String(self.__path)
    }
    @inline(__always)
    set {
      self.__path = std.string(newValue)
    }
  }
}
