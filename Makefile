# makefile pro diplomku

PACKAGE   = diplomka
VERSION   = ` date +"%Y.%m%d" `
ARCHIVE   = ${PACKAGE}-${VERSION}

program: bin/program

bin/program: src/program.c
	gcc src/program.c -o bin/program

data/data: bin/program
	bin/program

diplomka: data
	pdflatex --output-directory=doc src/diplomka.tex

clean:
	rm -f doc/*.aux doc/*.log
	rm -f src/*~

dist:
	tar -zcf   ${ARCHIVE}.tar ../ss/