\context Staff = "track-soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "soprano" {
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
		c'' 8 c'' c'' c'' c'' 4 a' 8 c''  |
		b' 2 g' 4. r8  |
		a' 4. a' 8 f' 4 a'  |
		aes' 2. r4  |

		c'' 8 c'' c'' c'' c'' 4 a' 8 c''  |
		b' 2 g' 4. r8  |
		a' 4. a' 8 f' 4 a'  |
		aes' 2. r8 e'  |

		%% sennor, ten piedad...
		e' 4 e' 8 e' e' 4 e' 8 a'  |
		g' 2 f' 4 r8 e'  |
		e' 4. r8 b' 4 aes'  |
		a' 1  |
		R1  |
		\bar "|."
        }

	\lyricsto "soprano" \new Lyrics \lyricmode {
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
