VERSION=$(cat version | tr -d \"\n\")
git tag "v${VERSION}-$(date +%Y-%m-%d.%H-%M-%S -u)-r$(git rev-list --count HEAD)" -m "Auto build"