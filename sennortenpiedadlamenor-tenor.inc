\context Staff = "track-tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key a \minor
		R1  |

		%% sennor, ten piedad...
		r2. r8 e 8  |
		e 4 e 8 e e 4 e 8 a  |
		g 2 f 4 r8 d  |
		d 4. r8 g 4 f  |
		e 2. r8 e  |

		e 4 e 8 e e 4 e 8 a  |
		g 2 f 4 r8 d  |
		d 4. r8 g 4 f  |
		e 2. r4  |

		%% cristo, ten piedad...
		e' 8 e' e' e' e' 4 c' 8 e'  |
		d' 2 b 4. r8  |
		c' 4. c' 8 a 4 c'  |
		b 2. r4  |

		e' 8 e' e' e' e' 4 c' 8 e'  |
		d' 2 b 4. r8  |
		c' 4. c' 8 a 4 c'  |
		b 2. r8 e'  |

		%% sennor, ten piedad...
		e 4 e 8 e e 4 e 8 a  |
		g 2 f 4 r8 e  |
		e 4. r8 e 4 e  |
		c 1  |
		R1  |
		\bar "|."
        }

	\lyricsto "tenor" \new Lyrics \lyricmode {
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
