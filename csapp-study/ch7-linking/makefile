target = main
object = main.o sum.o

$(target): $(object)
	@echo hehe
	cc -o $(target) $(object)

# %.o : %.d
# 	echo $<
#  include $<

# %.d:%.c
# 	echo %.d
# 	gcc -MM $< > $@.$$$$;\
# 	sed 's/\($*.o\)/\1 $@/g' < $@.$$$$ > $@;\
# 	rm $@.$$$$

clean:
	rm -f *.o *.d $(target)