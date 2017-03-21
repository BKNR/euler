import Data.List
sumOfDivisibles x y z = sum (union [x,x*2..z] [y,y*2..z])
