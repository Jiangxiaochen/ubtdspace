target = main

$(target):

include $(target).d

%.d:%.c
	gcc -MM $< > $@.$$$$;\
	sed 's/\($*.o\)/\1 $@/g' < $@.$$$$ > $@;\
	rm $@.$$$$

.PHONY:clean

exec1:
	cd /data
	pwd

exec2:
	cd /data;pwd

clean:
	rm -f $(target) $(target).d $(target).o