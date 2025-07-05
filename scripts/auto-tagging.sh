VERSION=$(cat VK_VERSION | tr -d \"\n\")
git tag "v${VERSION}-r$(git rev-list --count HEAD)-$(date +%Y.%m.%d-%H.%M.%S -u)" -m "Auto build"