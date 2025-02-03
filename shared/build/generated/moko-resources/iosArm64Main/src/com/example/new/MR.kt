package com.example.new

import dev.icerock.moko.resources.ResourceContainer
import dev.icerock.moko.resources.ResourcePlatformDetails
import dev.icerock.moko.resources.StringResource
import dev.icerock.moko.resources.utils.loadableBundle
import kotlin.String
import kotlin.collections.List
import platform.Foundation.NSBundle

public actual object MR {
  private val contentHash: String = "a10db8c7f3b56b317764e5ba0b59dcb6"

  private val bundle: NSBundle by lazy { NSBundle.loadableBundle("com.example.new.main") }

  public actual object strings : ResourceContainer<StringResource> {
    public actual override val __platformDetails: ResourcePlatformDetails =
        ResourcePlatformDetails(bundle)

    public actual val my_string: StringResource = StringResource(resourceId = "my_string", bundle =
        __platformDetails.nsBundle)

    public actual val login: StringResource = StringResource(resourceId = "login", bundle =
        __platformDetails.nsBundle)

    public actual val password: StringResource = StringResource(resourceId = "password", bundle =
        __platformDetails.nsBundle)

    public actual val log_in: StringResource = StringResource(resourceId = "log_in", bundle =
        __platformDetails.nsBundle)

    public actual val button_yes: StringResource = StringResource(resourceId = "button_yes", bundle
        = __platformDetails.nsBundle)

    public actual val button_no: StringResource = StringResource(resourceId = "button_no", bundle =
        __platformDetails.nsBundle)

    public actual val show_next_screen: StringResource = StringResource(resourceId =
        "show_next_screen", bundle = __platformDetails.nsBundle)

    public actual val go_back: StringResource = StringResource(resourceId = "go_back", bundle =
        __platformDetails.nsBundle)

    public actual override fun values(): List<StringResource> = listOf(my_string, login, password,
        log_in, button_yes, button_no, show_next_screen, go_back)
  }
}
