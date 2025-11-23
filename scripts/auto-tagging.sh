VERSION=$(cat VK_VERSION | tr -d \"\n\")
git tag "v${VERSION}-r$(git rev-list --count HEAD)-$(date +%Y.%m.%d -u)" -m "Auto build"
git tag -l