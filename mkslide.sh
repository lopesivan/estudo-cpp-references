#!/usr/bin/env bash

cat head.md

ls -rtl *.cpp |
	awk '{print $9}' | sort -n |
	while read -r file; do
		cat <<EOF
# $file

\`\`\`cpp
$(cat "$file")
\`\`\`
---
EOF
	done

cat footer.md
