
# https://blog.it-agenten.com/2015/12/gnu-make-an-oldie-but-goldie-part-ii/

ingredients = bread butter ham tomatoes salad

# multiple targets per one prerequisite
$(ingredients): groceries

# call buy with the missing prefix
groceries: $(addprefix buy-,$(ingredients))

# $* will hold whatever % was
buy-%:%
	touch $*

default: help

# ; -- same as newline + tab (activity entry)
# @ -- silence command
help: ; @echo "help yourself: 'make sandwitch' or 'make sliced.bread' or 'make bread'"

sliced.bread: bread
	mv bread sliced.bread

sliced.tomatoes: tomatoes
	mv tomatoes sliced.tomatoes

# pattern rule:
# %  -- like shell globbing ('*')
# $< -- holds prerequisites name
# $@ -- holds target name
sliced.%: %
	mv $< $@

# use declared variables
# use example:
# make washed.salad WASH=cp
WASH ?= mv
washed.%: %
	$(WASH) $< $@

# $^ -- all prerequisites of our target
sandwich: sliced.bread washed.salad sliced.tomatoes butter ham
	echo $^ > sandwich

clean-up-kitchen!:
	rm -f sliced.bread washed.salad sliced.tomatoes butter ham

clean: clean-up-kitchen!


# order only prerequisites
# call clean before calling buy
buy-%: % | clean-up-kitchen!
	touch $*
