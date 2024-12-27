x = input('Enter initial value for x: ')
y = input('Enter initial value for y: ')
z = input('Enter initial value for z: ')

x1 = (3/4)+(y/4)+(z/4)
y1 = (3/2)+(x1/3)-(z/6)
z1 = (-6/7)+(x1/7)-(y1/7)

while (1)

    if (abs(x1-x)<0.0001 & abs(y1-y)<0.0001 & abs(z1-z)<0.0001)
			break;

    end
    x = x1
	y = y1
	z = z1

	x1 = (3/4)+(y1/4)+(z1/4)
	y1 = (3/2)+(x1/3)-(z1/6)
	z1 = (-6/7)+(x1/7)-(y1/7)

end

