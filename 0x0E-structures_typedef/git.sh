#!/bin/bash
git add .
git commit -m "$(basename $(pwd))"
git push
