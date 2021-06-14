#
# Be sure to run `pod lib lint j2objc.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'j2objc'
  s.version          = '1.0.2'
  s.summary          = 'Google j2objc framework that customized for DiyalogEngine.'
  s.homepage         = 'https://github.com/tcak76/j2objc'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Diyalog' => 'tcak76@users.noreply.github.com' }
  s.source           = { :git => 'https://github.com/tcak76/j2objc.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'j2objc/**/*'
  
  
end
