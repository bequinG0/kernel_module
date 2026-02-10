savedcmd_module.mod := printf '%s\n'   module.o | awk '!x[$$0]++ { print("./"$$0) }' > module.mod
