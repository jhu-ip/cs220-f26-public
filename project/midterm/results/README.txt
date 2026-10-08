Sample images could be generated as follows:

$ ./project data/kitten.ppm results/kitten-point.ppm pointilism

$ ./project data/kitten.ppm results/kitten-rotate.ppm rotate-ccw

$ ./project data/kitten.ppm results/kitten-grayscale.ppm grayscale

$ ./project data/kitten.ppm results/kitten-blur-1.ppm blur 1

$ ./project data/kitten.ppm results/kitten-blur-5.ppm blur 5

$ ./project data/kitten.ppm results/kitten-blur-05.ppm blur .5

$ ./project data/kitten.ppm data/trees.ppm blend kitten-trees-05.ppm .5 

$ ./project data/kitten.ppm results/kitten-crop.ppm crop 100 100 250 250

