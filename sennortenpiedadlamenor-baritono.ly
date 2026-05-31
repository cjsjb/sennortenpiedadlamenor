\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	title = "Señor, ten piedad"
	subtitle = "La menor"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Barítono"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define fonts (set-global-fonts #:roman "Lato" #:sans "Lato"))
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
}
globalTempo = {
	\tempo 4 = 78
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "sennortenpiedadlamenor-acordes.inc"
		\new StaffGroup <<
			\include "sennortenpiedadlamenor-baritono.inc"
		>>
	>>
	\layout { }
}
