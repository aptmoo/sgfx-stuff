project "Sokol"
    kind "StaticLib"
    language "C"
    targetdir "../lib/"
    staticruntime "off"

    files 
    {
        "sokol/**.h", "sokol/**.c"
    }

    includedirs
    {
        "sokol/"
    }

    links
    {}

    defines
    {}

    targetdir ("../lib/")
    objdir ("../Intermediates/%{prj.name}")

    filter "system:windows"
        systemversion "latest"
        defines { "BUILD_WINDOWS" }

    filter "system:linux"
        libdirs { "/usr/lib", "../lib", }
        links { "dl", "m", "pthread", "GL" }
        defines { "BUILD_LINUX" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        runtime "Debug"
        symbols "On"

    filter "configurations:Release"
        defines { "RELEASE" }
        runtime "Release"
        optimize "On"
        symbols "On"