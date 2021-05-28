import ephem
import math 
def position_finder(inputs):
    start = inputs.find("[")
    end = inputs.find("]")
    last = inputs.find("/")
    observer = ephem.Observer()
    observer.lat = ephem.degrees(inputs[end+1:last])
    observer.lon = ephem.degrees(inputs[start+1:end])
    observer.elevation = 100#by defualt it will change later 
    observer.date = ephem.now()
    observer.epoch = '2020'
    if int(inputs[last+1:]) >16:
        star = ephem.star(inputs[:start])
        star.compute(observer)
        a = format(math.cos(float(star.alt)),"4.6f")
        b = format((float(star.az)*180)/math.pi,"4.6f")
        string = str(a) + "_" +str(b) 
    else:
        planet = getattr(ephem,inputs[:start])
        x = planet(observer)
        a = format(math.cos(float(x.alt)),"4.6f")
        b = format((float(x.az)*180)/math.pi,"4.6f")
        string = str(a) + "_" +str(b) 
    return string


