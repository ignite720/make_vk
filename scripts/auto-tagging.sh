VERSION=$(cat version | tr -d \"\n\")
git tag "v${VERSION}-build.$(git rev-list --count HEAD)-$(date +%Y-%m-%d-%H-%M-%S -u)" -m "Auto build"