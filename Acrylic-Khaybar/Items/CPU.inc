[mCPUPercentage]
Measure=CPU
Processor=0

[CPUContainer]
Meter=Image
MeterStyle=MeterStyleItem

W=(#Scale#*#IconSize#*1.5+[CPUPercentage:W])

[CPUTextContainer]
Meter=String

Text=CPU:
FontFace=#Font#
FontSize=(#Scale#*#TextSize#*0.75)
FontColor=#Color#
AntiAlias=1

X=r
Y=((#Scale#*#IconSize#-[#CurrentSection#:H])/2)r

UpdateDivider=-1
DynamicVariables=1

[CPUPercentage]
Meter=String
MeasureName=mCPUPercentage

Text=%1%
FontFace=#Font#
FontSize=(#Scale#*#TextSize#*0.75)
FontColor=#Color#
AntiAlias=1

X=(#Scale#*#TextSize#*0.5)R
Y=((#Scale#*#TextSize#-[#CurrentSection#:H])/2)r

UpdateDivider=30
DynamicVariables=1
