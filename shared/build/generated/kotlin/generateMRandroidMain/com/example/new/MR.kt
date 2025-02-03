package com.example.new

import com.example.fifth.R
import dev.icerock.moko.resources.ResourceContainer
import dev.icerock.moko.resources.ResourcePlatformDetails
import dev.icerock.moko.resources.StringResource
import kotlin.String
import kotlin.collections.List

public actual object MR {
  private val contentHash: String = "a10db8c7f3b56b317764e5ba0b59dcb6"

  public actual object strings : ResourceContainer<StringResource> {
    public actual override val __platformDetails: ResourcePlatformDetails =
        ResourcePlatformDetails()

    public actual val my_string: StringResource = StringResource(R.string.my_string)

    public actual val login: StringResource = StringResource(R.string.login)

    public actual val password: StringResource = StringResource(R.string.password)

    public actual val log_in: StringResource = StringResource(R.string.log_in)

    public actual val button_yes: StringResource = StringResource(R.string.button_yes)

    public actual val button_no: StringResource = StringResource(R.string.button_no)

    public actual val show_next_screen: StringResource = StringResource(R.string.show_next_screen)

    public actual val go_back: StringResource = StringResource(R.string.go_back)

    public actual override fun values(): List<StringResource> = listOf(my_string, login, password,
        log_in, button_yes, button_no, show_next_screen, go_back)
  }
}
