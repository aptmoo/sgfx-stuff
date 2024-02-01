workspace "LearningApp"
    architecture "x64"
    configurations { "Debug", "Release" }
    startproject "App"

group "Dependencies"
    include "Dependencies/BuildGLFW.lua"
    include "Dependencies/BuildSokol.lua"
group ""

include "App/BuildApp.lua"