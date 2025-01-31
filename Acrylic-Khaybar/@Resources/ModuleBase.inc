[Variables]
@Include=#@#Variables.inc
@Include2=#@#GlobalVariables.inc

ModuleCornerRadius=4
ModuleArrowSize=8

[Rainmeter]
Group=Modules
Update=20
AccurateText=1
DynamicWindowSize=1

OnRefreshAction=[!UpdateMeter *] [!UpdateMeter *] [!Redraw] [!Draggable 0]
MouseLeaveAction=[!DeactivateConfigGroup Modules]

; ================================================

[Background]
Meter=Shape

Shape=Path Arrow | StrokeWidth 0 | Fill Color #ModuleBackgroundColor#
Shape2=Rectangle 0, 0, (#Scale#*#ModuleWidth#), (#LastMeter#-([#ArrowTopOrBottom]=0 ? #Scale#*#ModuleArrowSize# : 0)+#Scale#*#ModulePadding#), (#Scale#*#ModuleCornerRadius#) | StrokeWidth 0 | Fill Color #ModuleBackgroundColor#
Shape3=Path Arrow | StrokeWidth 0 | Fill Color #ModuleBackgroundColor# | Rotate 180 | Offset (Clamp(#ArrowX#-#ModuleArrowSize#/2, #Scale#*#ModuleCornerRadius#, #Scale#*(#ModuleWidth#-#ModuleCornerRadius#-#ModuleArrowSize#))), (#LastMeter#-([#ArrowTopOrBottom]=0 ? #Scale#*#ModuleArrowSize# : 0)+#Scale#*#ModulePadding#) | Scale ([#ArrowTopOrBottom]=1 ? 1 : 0), [#ArrowTopOrBottom]=1 ? 1 : 0)

Arrow=0, 0 | LineTo 0, 0 | LineTo 0, 0 | ClosePath 1

UpdateDivider=-1
DynamicVariables=1

[FrostedGlass]
Measure=Plugin
Plugin=FrostedGlass
Type=Acrylic
Border=All