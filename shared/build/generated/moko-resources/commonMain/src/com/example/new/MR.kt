package com.example.new

import dev.icerock.moko.resources.ResourceContainer
import dev.icerock.moko.resources.ResourcePlatformDetails
import dev.icerock.moko.resources.StringResource
import kotlin.collections.List

public expect object MR {
  public object strings : ResourceContainer<StringResource> {
    public override val __platformDetails: ResourcePlatformDetails

    public val my_string: StringResource

    public val login: StringResource

    public val password: StringResource

    public val log_in: StringResource

    public val button_yes: StringResource

    public val button_no: StringResource

    public val show_next_screen: StringResource

    public val go_back: StringResource

    public override fun values(): List<StringResource>
  }
}
