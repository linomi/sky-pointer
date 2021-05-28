import ephem
def angular(op):
    op = str(op)
    start = op.find("[")
    end = op.find("]")
    observer = ephem.Observer()
    observer.lat = ephem.degrees(str(op[end+1:-2]))
    observer.lon = ephem.degrees(op[start+1:end])
    observer.elevation = 100#by defualt it will change later 
    observer.date = ephem.now()
    observer.epoch = '2020'
    #name = str(name)
    object = getattr(ephem,op[2:start])
    x = object(observer)
    a = x.az
    b = x.alt
    string = str(a) + "_" +str(b) 
    return string


