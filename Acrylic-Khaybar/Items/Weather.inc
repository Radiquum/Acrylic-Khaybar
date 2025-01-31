[IncludeWeatherParser]
@Include=#RootConfigPath#Modules\Weather\WeatherParser.inc
@Include2=#RootConfigPath#Modules\Weather\WeatherParserCache.inc

[mLocationParent]
Disabled=1

; ================================================

[MeterStyleWeatherIsActive1]
OnUpdateAction=[!SetWindowPosition "(Clamp(#CurrentConfigX#+[WeatherContainer:X]+([WeatherContainer:W]-#Scale#*#ModuleWidth#)/2, #Padding#, #ScreenAreaWidth#-#Padding#-#Scale#*#ModuleWidth#))" "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? #CurrentConfigY#+#CurrentConfigHeight#+#Scale#*8 : #CurrentConfigY#-#Scale#*8)" "0%" "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? 0 : 100)%" "Acrylic-Khaybar\Modules\Weather"] [!WriteKeyValue Variables ArrowTopOrBottom "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? 0 : 1)" "#RootConfigPath#Modules\Weather\Weather.ini"] [!SetVariable ArrowTopOrBottom "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? 0 : 1)" "Acrylic-Khaybar\Modules\Weather"] [!WriteKeyValue Variables ArrowX "((#CurrentConfigX#+[WeatherContainer:X]+[WeatherContainer:W]/2)-Clamp(#CurrentConfigX#+[WeatherContainer:X]+([WeatherContainer:W]-#Scale#*#ModuleWidth#)/2, #Padding#, #ScreenAreaWidth#-#Padding#-#Scale#*#ModuleWidth#))" "#RootConfigPath#Modules\Weather\Weather.ini"] [!SetVariable ArrowX "((#CurrentConfigX#+[WeatherContainer:X]+[WeatherContainer:W]/2)-Clamp(#CurrentConfigX#+[WeatherContainer:X]+([WeatherContainer:W]-#Scale#*#ModuleWidth#)/2, #Padding#, #ScreenAreaWidth#-#Padding#-#Scale#*#ModuleWidth#))" "Acrylic-Khaybar\Modules\Weather"] [!UpdateMeter * "Acrylic-Khaybar\Modules\Weather"] [!UpdateMeter * "Acrylic-Khaybar\Modules\Weather"] [!Redraw "Acrylic-Khaybar\Modules\Weather"]

[MeterStyleWeatherIsActive-1]

[mWeatherIsActive]
Group=IsActive
Measure=Plugin
Plugin=ConfigActive
ConfigName=Acrylic-Khaybar\Modules\Weather

OnChangeAction=[!UpdateMeter WeatherContainer] [!UpdateMeter WeatherCloseButton]

[WeatherContainer]
Meter=Image
MeterStyle=MeterStyleItem | MeterStyleWeatherIsActive[&mWeatherIsActive:]

W=(#Scale#*#IconSize#*1.5+[WeatherCurrentTemperature:W])

LeftMouseUpAction=[!DeactivateConfigGroup Modules] [!Delay 100] [!ActivateConfig "Acrylic-Khaybar\Modules\Weather"]

[WeatherCloseButton]
Meter=Image

W=(#Scale#*#IconSize#*1.5+[WeatherCurrentTemperature:W])
H=(#Scale#*#IconSize#)
SolidColor=0, 0, 0, 0

X=r
Y=r

UpdateDivider=-1
DynamicVariables=1
Hidden=([mWeatherIsActive:]=1 ? 0 : 1)

LeftMouseUpAction=[!DeactivateConfig "Acrylic-Khaybar\Modules\Weather"]

[WeatherCurrentIcon]
Meter=String

Text=[#mCurrentIconCache]

FontFace=JDWI
FontSize=(#Scale#*#IconSize#*0.75)
FontColor=#Color#
AntiAlias=1

X=r
Y=r

UpdateDivider=-1
DynamicVariables=1

[WeatherCurrentTemperature]
Meter=String

Text=[#mCurrentTemperatureCache][mUnitsTemperature]

FontFace=#Font#
FontSize=(#Scale#*#TextSize#*0.75)
FontColor=#Color#
AntiAlias=1

X=(#Scale#*#IconSize#*0.5)R
Y=((#Scale#*#IconSize#-[WeatherCurrentTemperature:H])/2)r

UpdateDivider=-1
DynamicVariables=1
