[mSWAPPercentage]
Measure=SwapMemory
UpdateDivider=20

[SWAPContainer]
Meter=Image
MeterStyle=MeterStyleItem

W=(#Scale#*#IconSize#*1.5+[SWAPPercentage:W])

[SWAPTextContainer]
Meter=String

Text=SWAP:
FontFace=#Font#
FontSize=(#Scale#*#TextSize#*0.75)
FontColor=#Color#
AntiAlias=1

X=r
Y=((#Scale#*#IconSize#-[#CurrentSection#:H])/2)r

UpdateDivider=-1
DynamicVariables=1

[SWAPPercentage]
Meter=String
MeasureName=mSWAPPercentage
Percentual=1
Text=%1%
FontFace=#Font#
FontSize=(#Scale#*#TextSize#*0.75)
FontColor=#Color#
AntiAlias=1

X=(#Scale#*#TextSize#*0.5)R
Y=((#Scale#*#TextSize#-[#CurrentSection#:H])/2)r

UpdateDivider=20
DynamicVariables=1
