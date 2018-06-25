#
#  Be sure to run `pod spec lint WVersion.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #https://github.com/frankKiwi/WVersion.git

  s.name         = "WVersion"
  s.version      = "1.0.0"
  s.summary      = "Frank.版本控制."
  s.homepage     = "https://github.com/frankKiwi/WVersion.git"
  s.license      = "MIT"
  s.author             = { "fanrenFRank" => "1778907544@qq.com" }
  # s.social_media_url   = "http://twitter.com/fanrenFRank"
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/frankKiwi/WVersion.git", :tag => "#{s.version}" }
  s.source_files  = "WVersion_Fir", "WVersion_Fir/*.{h,m}"
  s.frameworks = "UIKit", "Foundation"
  s.public_header_files = "WVersion_Fir/*.h"
  s.requires_arc = true
  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  s.dependency "AFNetworking", "~> 3.1.0"

end
