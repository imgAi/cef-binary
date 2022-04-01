
$Directory = ".\"
$Version = "99.2.14+g3f796b8+chromium-99.0.4844.84"
$Extension = "zip"
$Configuration = "win-x64"
$ArchiveSuffix = "_minimal"


# make sure to rebuild, by cleaning the build directories first
Remove-Item -Recurse -Force ".\cef_binary_3.y.z_*\"

# actually build cef binaries
.\build.ps1 nupkg local $Directory $Version $Extension $true "" $Configuration $ArchiveSuffix
