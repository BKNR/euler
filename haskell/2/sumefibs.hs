efib :: Int -> Integer
efib 0 = error "There's no 0th even fibonacci number."
efib 1 = 2
efib 2 = 8
efib x = 4 * efib (x-1) + efib (x-2)

sumEvenFibs x = sum (takeWhile (<x) (map efib [1,2..]))
