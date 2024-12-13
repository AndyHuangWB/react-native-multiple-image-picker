///
/// NitroCropConfig.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.multipleimagepicker

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * Represents the JavaScript object/struct "NitroCropConfig".
 */
@DoNotStrip
@Keep
data class NitroCropConfig(
  val language: Language,
  val presentation: Presentation,
  val circle: Boolean?,
  val ratio: Array<CropRatio>,
  val defaultRatio: CropRatio?,
  val freeStyle: Boolean?
)