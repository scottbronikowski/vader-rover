> (define *loud-parser?* #t)
***** *LOUD-PARSER?* is redefined
*LOUD-PARSER?*
> *floorplan*
((THE-STOOL #(-1.37 1.304)) (THE-CONE #(1.37 -1.304)) (THE-TABLE #(0 -1.304)) (THE-TABLE #(-1.37 -1.304)))
> (parse-tree->parse-functions (parse-sentence "the robot went behind the cone then went in front of the table which is left of the table") *floorplan* *lexicon*)
"parse-sentence" (THE-ROBOT WENT BEHIND THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE)
"parse word" (SUBJECT (THE-ROBOT WENT BEHIND THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (THE-ROBOT))
"word-parse returned:" ((SUBJECT THE-ROBOT) (WENT BEHIND THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE))
"parse-predicate" (WENT BEHIND THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE)
"parse word" (VERB (WENT BEHIND THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (WENT))
"word-parse returned:" ((VERB WENT) (BEHIND THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE))
"parse-prepositional-phrase" (BEHIND THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE)
"parse word" (ONE-OBJECT-ADVERB-PREPOSITION (BEHIND THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (LEFT-OF RIGHT-OF BEHIND IN-FRONT-OF AROUND TOWARDS AWAY-FROM PAST))
"word-parse returned:" ((ONE-OBJECT-ADVERB-PREPOSITION BEHIND) (THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE))
"parse-object-phrase" (THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE)
"parse word" (NOUN (THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (THE-TABLE THE-CHAIR THE-BOX THE-BUCKET THE-CONE THE-STOOL THE-BAG))
"word-parse returned:" ((NOUN THE-CONE) (THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE))
"parse-object-phrase-returned:" ((OBJECT-PHRASE (NOUN THE-CONE)) (THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE))
"in the midst of parsing single-object prepositional phrase" #T
"another prep phrase?" #F
"prepositional-phrase-parse returned:" (((PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION BEHIND) (OBJECT-PHRASE (NOUN THE-CONE))))) (THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE))
"in the midst of parsing predicate" (THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE)
"parse word" (TEMPORAL-CONJUNCTION (THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (THEN))
"word-parse returned:" ((TEMPORAL-CONJUNCTION THEN) (WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE))
"parse-predicate" (WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE)
"parse word" (VERB (WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (WENT))
"word-parse returned:" ((VERB WENT) (IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE))
"parse-prepositional-phrase" (IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE)
"parse word" (ONE-OBJECT-ADVERB-PREPOSITION (IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (LEFT-OF RIGHT-OF BEHIND IN-FRONT-OF AROUND TOWARDS AWAY-FROM PAST))
"word-parse returned:" ((ONE-OBJECT-ADVERB-PREPOSITION IN-FRONT-OF) (THE-TABLE WHICH-IS LEFT-OF THE-TABLE))
"parse-object-phrase" (THE-TABLE WHICH-IS LEFT-OF THE-TABLE)
"parse word" (NOUN (THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (THE-TABLE THE-CHAIR THE-BOX THE-BUCKET THE-CONE THE-STOOL THE-BAG))
"word-parse returned:" ((NOUN THE-TABLE) (WHICH-IS LEFT-OF THE-TABLE))
"parse-adjective-phrase" (WHICH-IS LEFT-OF THE-TABLE)
"parse word" (ONE-OBJECT-ADJECTIVE-PREPOSITION (LEFT-OF THE-TABLE) (LEFT-OF RIGHT-OF BEHIND IN-FRONT-OF))
"word-parse returned:" ((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (THE-TABLE))
"parse-object-phrase" (THE-TABLE)
"parse word" (NOUN (THE-TABLE) (THE-TABLE THE-CHAIR THE-BOX THE-BUCKET THE-CONE THE-STOOL THE-BAG))
"word-parse returned:" ((NOUN THE-TABLE) ())
"parse-object-phrase-returned:" ((OBJECT-PHRASE (NOUN THE-TABLE)) ())
"parse-object-phrase-returned:" ((OBJECT-PHRASE ((NOUN THE-TABLE) (ADJECTIVE-PHRASE (((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE))))))) ())
"in the midst of parsing single-object prepositional phrase" #T
"another prep phrase?" #F
"prepositional-phrase-parse returned:" (((PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION IN-FRONT-OF) (OBJECT-PHRASE ((NOUN THE-TABLE) (ADJECTIVE-PHRASE (((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE)))))))))) ())
"in the midst of parsing predicate" ()
"parse-predicate-returned:" ((PREDICATE (((VERB WENT) ((PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION IN-FRONT-OF) (OBJECT-PHRASE ((NOUN THE-TABLE) (ADJECTIVE-PHRASE (((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE))))))))))))) ())
"parse-predicate-returned:" ((PREDICATE (((VERB WENT) ((PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION BEHIND) (OBJECT-PHRASE (NOUN THE-CONE)))))) ((VERB WENT) ((PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION IN-FRONT-OF) (OBJECT-PHRASE ((NOUN THE-TABLE) (ADJECTIVE-PHRASE (((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE))))))))))))) ())
"parse word" (TWO-OBJECT-ADJECTIVE-PREPOSITION (LEFT-OF THE-TABLE) (BETWEEN))
"parse word" (TWO-OBJECT-ADVERB-PREPOSITION (IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (BETWEEN))
"parse word" (TWO-OBJECT-ADVERB-PREPOSITION (BEHIND THE-CONE THEN WENT IN-FRONT-OF THE-TABLE WHICH-IS LEFT-OF THE-TABLE) (BETWEEN))
"parse-sentence returned:" ((SENTENCE ((SUBJECT THE-ROBOT) (PREDICATE (((VERB WENT) ((PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION BEHIND) (OBJECT-PHRASE (NOUN THE-CONE)))))) ((VERB WENT) ((PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION IN-FRONT-OF) (OBJECT-PHRASE ((NOUN THE-TABLE) (ADJECTIVE-PHRASE (((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE))))))))))))))))
"adverbial-phrase" (PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION BEHIND) (OBJECT-PHRASE (NOUN THE-CONE))))
"object-phrase:" (OBJECT-PHRASE (NOUN THE-CONE))
"input to object-phrase->scored-points:" (OBJECT-PHRASE (NOUN THE-CONE))
"what is this?" NOUN
"object-type-score" 3.853129100788598e-13
"object-phrase->point returned:" ((THE-STOOL #(-1.37 1.304)) -28.58472063727655)
"object-type-score" 0.9999999999995293
"object-phrase->point returned:" ((THE-CONE #(1.37 -1.304)) -4.707345624411771e-13)
"object-type-score" 2.86614749107085e-14
"object-phrase->point returned:" ((THE-TABLE #(0 -1.304)) -31.18322251149326)
"object-type-score" 2.86614749107085e-14
"object-phrase->point returned:" ((THE-TABLE #(-1.37 -1.304)) -31.18322251149326)
"scored-objects:" (((THE-STOOL #(-1.37 1.304)) -28.58472063727655) ((THE-CONE #(1.37 -1.304)) -4.707345624411771e-13) ((THE-TABLE #(0 -1.304)) -31.18322251149326) ((THE-TABLE #(-1.37 -1.304)) -31.18322251149326))
"point" #(1.37 -1.304)
"prep->function output:" #*PROCEDURE*
"adverbial-phrase" (PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION IN-FRONT-OF) (OBJECT-PHRASE ((NOUN THE-TABLE) (ADJECTIVE-PHRASE (((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE)))))))))
"object-phrase:" (OBJECT-PHRASE ((NOUN THE-TABLE) (ADJECTIVE-PHRASE (((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE)))))))
"input to object-phrase->scored-points:" (OBJECT-PHRASE ((NOUN THE-TABLE) (ADJECTIVE-PHRASE (((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE)))))))
"what is this?" (NOUN THE-TABLE)
"object-type-score" 8.195046794753962e-15
"element of adjective phrase" ((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE)))
"input to object-phrase->scored-points:" (OBJECT-PHRASE (NOUN THE-TABLE))
"what is this?" NOUN
"object-type-score" 8.195046794753962e-15
"object-phrase->point returned:" ((THE-STOOL #(-1.37 1.304)) -32.43524647257208)
"other object:" (THE-STOOL #(-1.37 1.304))
"object:" (THE-STOOL #(-1.37 1.304))
"objects equal, failing" ((THE-STOOL #(-1.37 1.304)) ((THE-STOOL #(-1.37 1.304)) -32.43524647257208))
"object-type-score" 2.166731411601251e-14
"object-phrase->point returned:" ((THE-CONE #(1.37 -1.304)) -31.46297153185212)
"other object:" (THE-CONE #(1.37 -1.304))
"object:" (THE-STOOL #(-1.37 1.304))
"object-phrase->point returned:" ((THE-STOOL #(-1.37 1.304)) -105.9297358403689)
"object-type-score" 0.9999999999998993
"object-phrase->point returned:" ((THE-TABLE #(0 -1.304)) -1.006972283335068e-13)
"other object:" (THE-TABLE #(0 -1.304))
"object:" (THE-STOOL #(-1.37 1.304))
"object-phrase->point returned:" ((THE-STOOL #(-1.37 1.304)) -103.9677270488451)
"object-type-score" 0.9999999999998993
"object-phrase->point returned:" ((THE-TABLE #(-1.37 -1.304)) -1.006972283335068e-13)
"other object:" (THE-TABLE #(-1.37 -1.304))
"object:" (THE-STOOL #(-1.37 1.304))
"object-phrase->point returned:" ((THE-STOOL #(-1.37 1.304)) -152.4797487424685)
"object-type-score" 2.166731411601251e-14
"element of adjective phrase" ((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE)))
"input to object-phrase->scored-points:" (OBJECT-PHRASE (NOUN THE-TABLE))
"what is this?" NOUN
"object-type-score" 8.195046794753962e-15
"object-phrase->point returned:" ((THE-STOOL #(-1.37 1.304)) -32.43524647257208)
"other object:" (THE-STOOL #(-1.37 1.304))
"object:" (THE-CONE #(1.37 -1.304))
"object-phrase->point returned:" ((THE-CONE #(1.37 -1.304)) -224.7631981708937)
"object-type-score" 2.166731411601251e-14
"object-phrase->point returned:" ((THE-CONE #(1.37 -1.304)) -31.46297153185212)
"other object:" (THE-CONE #(1.37 -1.304))
"object:" (THE-CONE #(1.37 -1.304))
"objects equal, failing" ((THE-CONE #(1.37 -1.304)) ((THE-CONE #(1.37 -1.304)) -31.46297153185212))
"object-type-score" 0.9999999999998993
"object-phrase->point returned:" ((THE-TABLE #(0 -1.304)) -1.006972283335068e-13)
"other object:" (THE-TABLE #(0 -1.304))
"object:" (THE-CONE #(1.37 -1.304))
"object-phrase->point returned:" ((THE-CONE #(1.37 -1.304)) -232.6404869987147)
"object-type-score" 0.9999999999998993
"object-phrase->point returned:" ((THE-TABLE #(-1.37 -1.304)) -1.006972283335068e-13)
"other object:" (THE-TABLE #(-1.37 -1.304))
"object:" (THE-CONE #(1.37 -1.304))
"object-phrase->point returned:" ((THE-CONE #(1.37 -1.304)) -232.6404869987147)
"object-type-score" 0.9999999999998993
"element of adjective phrase" ((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE)))
"input to object-phrase->scored-points:" (OBJECT-PHRASE (NOUN THE-TABLE))
"what is this?" NOUN
"object-type-score" 8.195046794753962e-15
"object-phrase->point returned:" ((THE-STOOL #(-1.37 1.304)) -32.43524647257208)
"other object:" (THE-STOOL #(-1.37 1.304))
"object:" (THE-TABLE #(0 -1.304))
"object-phrase->point returned:" ((THE-TABLE #(0 -1.304)) -163.7992638987134)
"object-type-score" 2.166731411601251e-14
"object-phrase->point returned:" ((THE-CONE #(1.37 -1.304)) -31.46297153185212)
"other object:" (THE-CONE #(1.37 -1.304))
"object:" (THE-TABLE #(0 -1.304))
"object-phrase->point returned:" ((THE-TABLE #(0 -1.304)) -33.18195406740399)
"object-type-score" 0.9999999999998993
"object-phrase->point returned:" ((THE-TABLE #(0 -1.304)) -1.006972283335068e-13)
"other object:" (THE-TABLE #(0 -1.304))
"object:" (THE-TABLE #(0 -1.304))
"objects equal, failing" ((THE-TABLE #(0 -1.304)) ((THE-TABLE #(0 -1.304)) -1.006972283335068e-13))
"object-type-score" 0.9999999999998993
"object-phrase->point returned:" ((THE-TABLE #(-1.37 -1.304)) -1.006972283335068e-13)
"other object:" (THE-TABLE #(-1.37 -1.304))
"object:" (THE-TABLE #(0 -1.304))
"object-phrase->point returned:" ((THE-TABLE #(0 -1.304)) -201.1775154668626)
"object-type-score" 0.9999999999998993
"element of adjective phrase" ((ONE-OBJECT-ADJECTIVE-PREPOSITION LEFT-OF) (OBJECT-PHRASE (NOUN THE-TABLE)))
"input to object-phrase->scored-points:" (OBJECT-PHRASE (NOUN THE-TABLE))
"what is this?" NOUN
"object-type-score" 8.195046794753962e-15
"object-phrase->point returned:" ((THE-STOOL #(-1.37 1.304)) -32.43524647257208)
"other object:" (THE-STOOL #(-1.37 1.304))
"object:" (THE-TABLE #(-1.37 -1.304))
"object-phrase->point returned:" ((THE-TABLE #(-1.37 -1.304)) -115.28724220509)
"object-type-score" 2.166731411601251e-14
"object-phrase->point returned:" ((THE-CONE #(1.37 -1.304)) -31.46297153185212)
"other object:" (THE-CONE #(1.37 -1.304))
"object:" (THE-TABLE #(-1.37 -1.304))
"object-phrase->point returned:" ((THE-TABLE #(-1.37 -1.304)) -33.18195406740399)
"object-type-score" 0.9999999999998993
"object-phrase->point returned:" ((THE-TABLE #(0 -1.304)) -1.006972283335068e-13)
"other object:" (THE-TABLE #(0 -1.304))
"object:" (THE-TABLE #(-1.37 -1.304))
"object-phrase->point returned:" ((THE-TABLE #(-1.37 -1.304)) -1.718982535551976)
"object-type-score" 0.9999999999998993
"object-phrase->point returned:" ((THE-TABLE #(-1.37 -1.304)) -1.006972283335068e-13)
"other object:" (THE-TABLE #(-1.37 -1.304))
"object:" (THE-TABLE #(-1.37 -1.304))
"objects equal, failing" ((THE-TABLE #(-1.37 -1.304)) ((THE-TABLE #(-1.37 -1.304)) -1.006972283335068e-13))
"scored-objects:" (((THE-STOOL #(-1.37 1.304)) -105.9297358403689) ((THE-STOOL #(-1.37 1.304)) -103.9677270488451) ((THE-STOOL #(-1.37 1.304)) -152.4797487424685) ((THE-CONE #(1.37 -1.304)) -224.7631981708937) ((THE-CONE #(1.37 -1.304)) -232.6404869987147) ((THE-CONE #(1.37 -1.304)) -232.6404869987147) ((THE-TABLE #(0 -1.304)) -163.7992638987134) ((THE-TABLE #(0 -1.304)) -33.18195406740399) ((THE-TABLE #(0 -1.304)) -201.1775154668626) ((THE-TABLE #(-1.37 -1.304)) -115.28724220509) ((THE-TABLE #(-1.37 -1.304)) -33.18195406740399) ((THE-TABLE #(-1.37 -1.304)) -1.718982535551976))
"point" #(-1.37 -1.304)
"prep->function output:" #*PROCEDURE*
#(#(#*PROCEDURE* #*PROCEDURE*) #(#*PROCEDURE*) #(#*PROCEDURE*))

> (interpretation->parse-functions (first (semantic-interpreter "the robot went behind the cone then went in front of the table which is left of the table")) *floorplan* *lexicon*)
"input: " (AND (CONE X0) (TABLE X1) (TABLE X2) (BEHIND ALPHA1 X0) (FRONT ALPHA3 X1) (LEFT X1 X2))
"adv-ph: " ((BEHIND ALPHA1 X0) (FRONT ALPHA3 X1))
"adj-ph: " ((LEFT X1 X2))
"obj-fn: " ((CONE X0) (TABLE X1) (TABLE X2))
#(#(#*PROCEDURE* #*PROCEDURE*) (AND (CONE X0) (TABLE X1) (TABLE X2) (BEHIND ALPHA1 X0) (FRONT ALPHA3 X1) (LEFT X1 X2)) ((BEHIND ALPHA1 X0) (FRONT ALPHA3 X1)) ((LEFT X1 X2)) ((CONE X0) (TABLE X1) (TABLE X2)))