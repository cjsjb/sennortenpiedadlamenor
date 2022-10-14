\context Staff = "track-mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \minor
		R1  |

		%% sennor, ten piedad...
		r2. r8 e' 8  |
		e' 4 e' 8 e' e' 4 e' 8 a'  |
		g' 2 f' 4 r8 d'  |
		d' 4. r8 g' 4 f'  |
		e' 2. r8 e'  |

		e' 4 e' 8 e' e' 4 e' 8 a'  |
		g' 2 f' 4 r8 d'  |
		d' 4. r8 g' 4 f'  |
		e' 2. r4  |

		%% cristo, ten piedad...
		a' 8 a' a' a' a' 4 e' 8 a'  |
		g' 2 g' 4. r8  |
		f' 4. f' 8 f' 4 f'  |
		e' 2. r4  |

		a' 8 a' a' a' a' 4 e' 8 a'  |
		g' 2 g' 4. r8  |
		f' 4. f' 8 f' 4 f'  |
		e' 2. r8 e'  |

		%% sennor, ten piedad...
		e' 4 e' 8 e' e' 4 e' 8 a'  |
		g' 2 f' 4 r8 e'  |
		e' 4. r8 e' 4 e'  |
		e' 1  |
		R1  |
		\bar "|."
        }

	\new Lyrics \lyricsto "mezzo" {
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
