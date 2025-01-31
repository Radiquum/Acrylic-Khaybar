[mMusicState]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=State

RegExpSubstitute=1
Substitute="^0$":"play_arrow", "^1$":"pause", "^2$":"play_arrow", "^3$":"replay"

OnChangeAction=#Update#

[mMusicTitle]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Title

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

OnChangeAction=#Update#

[mMusicArtist]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Artist

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

OnChangeAction=#Update#

[mMusicCoverURL]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=CoverWebAddress

OnChangeAction=#Update#

[mMusicCover]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Cover
CoverPath=#@#Cover.png

[mMusicProgress]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Progress

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]

[mMusicPosition]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Position

OnChangeAction=#Update#

[mMusicDuration]
Measure=Plugin
Plugin=WebNowPlaying

PlayerType=Duration


[mHeart]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Rating
IfCondition=mHeart = 0
IfTrueAction=[!SetOption Heart MeterStyle "EmptyHeart"]
IfFalseAction=[!SetOption Heart MeterStyle "FullHeart"]
UpdateDivider=1
