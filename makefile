# ----------------------------
# Makefile Options
# ----------------------------

NAME = USBT
ICON = icon.png
DESCRIPTION = "A app that lets you change usb timer settings"
COMPRESSED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
