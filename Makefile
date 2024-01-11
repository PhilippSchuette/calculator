OUT		= ./out/
DOCS	= ./docs/
SRC		= ./src/

.phony: all calculator run doc clean

all: calculator

calculator:
	@echo "[INFO] rebuilding project:"
	@$(MAKE) -s -C $(SRC) all
	@echo "[INFO] done!"

run:
	@echo "[INFO] rebuilding project:"
	@$(MAKE) -s -C $(SRC) all
	@echo "[INFO] done!"
	@echo "[INFO] running project:"
	@$(OUT)calculator

doc:
	@echo "[INFO] rebuilding project documentation..."
	@if [ ! -e $(DOCS) ]; then mkdir $(DOCS); fi
	@(doxygen .doxyfile 1>/dev/null && echo "[INFO] done!" && firefox $(DOCS)/html/index.html) \
		|| [WARN] error building docs!

clean:
	@(rm -r $(OUT) 2>/dev/null && echo "[INFO] removing build artifacts...") \
		|| echo "[INFO] no build artifacts to remove!"
	@(rm -r $(DOCS) 2>/dev/null && echo "[INFO] removing doc artifacts...") \
		|| echo "[INFO] no doc artifacts to remove!"
