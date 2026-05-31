\context Staff = "track-baritono" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Barítono"
	\set Staff.shortInstrumentName = "B."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "baritono" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "treble_8"
		\key c \major
		R1  |
		r2 r4 r8 e  |
		e 4 e 8 e e 4 e 8 a  |
		g 2 f 4 r8 d  |
%% 5
		d 4. r8 g 4 f  |
		e 2. r8 e  |
		e 4 e 8 e e 4 e 8 a  |
		g 2 f 4 r8 d  |
		d 4. r8 g 4 f  |
%% 10
		e 2. r4  |
		a 8 a a a a 4 e 8 a  |
		g 2 g 4. r8  |
		f 4. f 8 f 4 f  |
		e 2. r4  |
%% 15
		a 8 a a a a 4 e 8 a  |
		g 2 g 4. r8  |
		f 4. f 8 f 4 f  |
		e 2. r8 e  |
		e 4 e 8 e e 4 e 8 a  |
%% 20
		g 2 f 4 r8 e  |
		e 4. r8 e 4 e  |
		a, 1  |
		R1  |
		\bar "|."
        }

	\new Lyrics \lyricsto "baritono" {
		Se -- ñor, ten pie -- dad de nos -- o -- tros,
		Se -- ñor, ten pie -- dad.
		Se -- ñor, ten pie -- dad de nos -- o -- tros,
		Se -- ñor, ten pie -- dad.

		Cris -- to, ten pie -- dad de nos -- o -- tros,
		Cris -- to, ten pie -- dad.
		Cris -- to, ten pie -- dad de nos -- o -- tros,
		Cris -- to, ten pie -- dad.

		Se -- ñor, ten pie -- dad de nos -- o -- tros,
		Se -- ñor, ten pie -- dad.
	}
>>
