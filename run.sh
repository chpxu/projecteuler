#!/bin/bash
pwd=$(pwd)
check_exists() {
  local from_root="$pwd/src/q$1/q$1.$2"
  local from_src="$pwd/q$1/q$1.$2"
  if [ -f  "$from_root" ]; then
    return "$from_root"
  elif [ -f  "$from_src" ]; then
    return "$from_src"
  fi
  return 1
}
questionnumber=$1

python3 "$(check_exists "$questionnumber" "py")"