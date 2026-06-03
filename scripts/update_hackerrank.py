import re
import requests

USERNAME = "mrstudieshelper"

README_FILE = "README.md"

url = f"https://www.hackerrank.com/profile/{USERNAME}"

html = requests.get(
    url,
    headers={"User-Agent": "Mozilla/5.0"}
).text

# Basic extraction
badges = len(re.findall(r'badge', html, re.IGNORECASE))
stars = len(re.findall(r'star', html, re.IGNORECASE))

stats = f"""
## 📊 HackerRank Statistics

| Metric | Value |
|---------|---------|
| Username | {USERNAME} |
| Profile | https://www.hackerrank.com/{USERNAME} |
| Scraped Badges | {badges} |
| Scraped Stars References | {stars} |

_Last Updated Automatically_
"""

with open(README_FILE, "r", encoding="utf-8") as f:
    content = f.read()

pattern = r'<!-- HACKERRANK_STATS_START -->.*?<!-- HACKERRANK_STATS_END -->'

replacement = (
    "<!-- HACKERRANK_STATS_START -->\n"
    + stats +
    "\n<!-- HACKERRANK_STATS_END -->"
)

content = re.sub(
    pattern,
    replacement,
    content,
    flags=re.DOTALL
)

with open(README_FILE, "w", encoding="utf-8") as f:
    f.write(content)

print("README updated.")
