#!/usr/bin/gnuplot --persist
set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
set output 'derivative.png'

set grid

#plot [0:2*pi] sin(x)
#replot [0:2*pi] cos(x) title "cos(x)"
#replot "derivative.dat" every ::1 using 1:2 with lines title "sin(x) (from file)",
#replot "derivative.dat" every ::1 using 1:3 with lines title "sin'(x) (finite difference)"

plot [0:2*pi] sin(x), \
              cos(x) title "cos(x)", \
              "derivative.dat" every ::1 using 1:2 with lines title "sin(x) (from file)", \
              "derivative.dat" every ::1 using 1:3 with lines title "sin'(x) (finite difference)"
