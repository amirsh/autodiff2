import matplotlib as mpl
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.cbook as cbook
import os.path
from matplotlib import rc
# rc('font',**{'family':'sans-serif','sans-serif':['Helvetica']})
## for Palatino and other serif fonts use:
#rc('font',**{'family':'serif','serif':['Palatino']})
# rc('text', usetex=True)
rc('font', family='sans-serif') 
rc('font', serif='Helvetica Neue') 
rc('text', usetex='false') 

# x = range(100)
# y = range(100,200)
# fig = plt.figure()
# ax1 = fig.add_subplot(111)

# ax1.scatter(x[:4], y[:4], s=10, c='b', marker="s", label='first')
# ax1.scatter(x[40:],y[40:], s=10, c='r', marker="o", label='second')
# plt.legend(loc='upper left');
# plt.show()

TapenadeR = 'Tapenade (R)'
TapenadeF = 'Tapenade (F)'
TapenadeRFused = 'Tapenade (R) + Fused'
TapenadeFFused = 'Tapenade (F) + Fused'
DiffSmooth = 'dF~'
DiffSmoothMotion = 'dF~ + Code Motion'
DiffSmoothMotionDPS = 'dF~ + Code Motion + DPS'
DiffSmoothDPS = 'dF~ + DPS'
Theano = 'Theano'

colors = {}
colors[TapenadeR] = 'r'
colors[TapenadeF] = 'b'
colors[TapenadeRFused] = 'y'
colors[TapenadeFFused] = 'k'
colors[DiffSmooth] = 'g'
colors[DiffSmoothDPS] = 'c'
colors[DiffSmoothMotion] = 'm'
colors[DiffSmoothMotionDPS] = 'c'
colors[Theano] = 'm'

markers = {}
markers[TapenadeR] = 's'
markers[TapenadeF] = 's'
markers[TapenadeRFused] = 'x'
markers[TapenadeFFused] = 'x'
markers[DiffSmooth] = 'o'
markers[DiffSmoothDPS] = 'o'
markers[DiffSmoothMotion] = 'o'
markers[DiffSmoothMotionDPS] = 'o'
markers[Theano] = 's'

def plot(file, title, variants, xlabel = 'Vector Dimension', legpos = 'upper left'):
	data_file = file + ".csv"
	if(os.path.isfile(data_file)):
		names_val = ['x']

		for i in range(0, len(variants)):
			# names_val.append(chr(ord('c') + i))
			names_val.append("y" + str(i))

		data = np.genfromtxt(data_file, delimiter=',', skip_header=1, 
		                     names=names_val)

		fig = plt.figure()

		ax1 = fig.add_subplot(111)

		ax1.set_title(title)    
		ax1.set_xlabel(xlabel)
		ax1.set_ylabel('Run time (ms)')

		ax1.set_xscale("log", nonposx='clip')
		ax1.set_yscale("log", nonposy='clip')


		# x = range(100)
		# y = range(100,200)

		# ax1.scatter(x[:4], y[:4], s=10, c='b', marker="s", label='first')
		# ax1.scatter(x[40:],y[40:], s=10, c='r', marker="o", label='second')
		# ax1.scatter(data['x'], data['c'], s=10, c='b', marker="s", label=variants[0])
		# ax1.scatter(data['x'], data['d'], s=10, c='r', marker="|", label=variants[1], linewidth=2)
		# ax1.plot( 'x', 'c', data=data, marker='o', markerfacecolor='blue', markersize=12, color='skyblue', linewidth=4)
		# ax1.plot( 'x', 'd', data=data, marker='', color='olive', linewidth=2)
		for i in range(0, len(variants)):
			ax1.plot(data['x'], data['y' + str(i)], c=colors[variants[i]], marker=markers[variants[i]], label=variants[i])	
		# ax1.plot(data['x'], data['y0'], c='b', marker="s", label=variants[0])
		# ax1.plot(data['x'], data['y1'], c='r', marker="o", label=variants[1])
		ax1.set_xlim(left=min(data['x']), right=max(data['x']))

		figure_name = file + '.png'

		if (legpos != '') :
			if (legpos == 'upper left'):
				leg = ax1.legend(loc=legpos);
			else:
				leg = ax1.legend(loc=legpos, bbox_to_anchor=(1, 0.5))
			plt.savefig(figure_name, bbox_extra_artists=(leg,), bbox_inches='tight')
		else:
			plt.savefig(figure_name, bbox_extra_artists=(), bbox_inches='tight')
		plt.close()

plot('data/ba_proj', "Jacobian of Project in Bundle Adjustment", [TapenadeR, TapenadeF, DiffSmooth, DiffSmoothMotion, DiffSmoothMotionDPS])
plot('data/add', "Jacobian of Vector Addition w.r.t. the First Vector", [TapenadeR, TapenadeF, DiffSmooth, DiffSmoothDPS, Theano])
plot('data/mults', "Gradient of Vector-Scalar Multiplication w.r.t. Scalar", [TapenadeR, TapenadeF, DiffSmooth, DiffSmoothDPS, Theano])
plot('data/dot', "Gradient of Vector Dot Product w.r.t. the First Vector", [TapenadeR, TapenadeF, DiffSmooth, DiffSmoothDPS, Theano])
plot('data/max', "Gradient of Vector Max w.r.t. the Input Vector", [TapenadeR, TapenadeF, DiffSmooth, DiffSmoothDPS, Theano])
plot('data/lse', "Gradient of Log-Sum-Exp", [TapenadeR, TapenadeF, TapenadeRFused, TapenadeFFused, DiffSmooth, DiffSmoothDPS], 
	legpos = 'center left')
plot('data/nmf_1', "Non-Negative Matrix Factorization -- Dimension of A: 100 x K", 
	[TapenadeR, TapenadeF, TapenadeRFused, TapenadeFFused, Theano, DiffSmooth, DiffSmoothDPS],
	xlabel = 'Dimension (K)', legpos = '')
plot('data/nmf_2', "Non-Negative Matrix Factorization -- Dimension of A: K x 100", 
	[TapenadeR, TapenadeF, TapenadeRFused, TapenadeFFused, Theano, DiffSmooth, DiffSmoothDPS],
	xlabel = 'Dimension (K)', legpos = 'center left')
