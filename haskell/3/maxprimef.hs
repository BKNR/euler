prime_factors :: (Integral a) => a -> [a]
prime_factors n =
    case factors of
        [] -> [n]
        _  -> factors ++ prime_factors (n `div` (head factors))
    where factors = take 1 $ filter (\x -> (n `mod` x) == 0) [2..(n `div` 2)]

max_prime_fac :: Integer -> Integer
max_prime_fac n = maximum (prime_factors n)
