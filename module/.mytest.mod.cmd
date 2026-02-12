savedcmd_mytest.mod := printf '%s\n'   mytest.o | awk '!x[$$0]++ { print("./"$$0) }' > mytest.mod
