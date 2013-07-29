/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString, NSDictionary, NSNumber;

@interface MCWiFiPayload : MCPayload  {
    BOOL _isHidden;
    BOOL _isWEP;
    BOOL _isWPA;
    BOOL _passwordRequired;
    BOOL _usernameRequired;
    BOOL _autoJoin;
    BOOL _proxyPACFallbackAllowed;
    BOOL _isHotspot;
    BOOL _serviceProviderRoamingEnabled;
    NSString *_ssid;
    NSString *_encryptionType;
    NSDictionary *_eapClientConfig;
    NSString *_password;
    NSString *_username;
    NSString *_certificateUUID;
    NSArray *_payloadCertificateAnchorUUID;
    int _proxyType;
    NSString *_proxyServer;
    NSNumber *_proxyServerPort;
    NSString *_proxyUsername;
    NSString *_proxyPassword;
    NSString *_proxyPACURLString;
    NSString *_credentialUUID;
    NSNumber *_priority;
    NSString *_domainName;
    NSString *_HESSID;
    NSArray *_roamingConsortiumOIs;
    NSArray *_NAIRealmNames;
    NSArray *_MCCAndMNCs;
    NSString *_displayedOperatorName;
}

@property(retain) NSString * ssid;
@property BOOL isHidden;
@property(retain) NSString * encryptionType;
@property BOOL isWEP;
@property BOOL isWPA;
@property(retain) NSDictionary * eapClientConfig;
@property BOOL passwordRequired;
@property(retain) NSString * password;
@property BOOL usernameRequired;
@property(retain) NSString * username;
@property BOOL autoJoin;
@property(retain) NSString * certificateUUID;
@property(retain) NSArray * payloadCertificateAnchorUUID;
@property int proxyType;
@property(retain) NSString * proxyServer;
@property(retain) NSNumber * proxyServerPort;
@property(retain) NSString * proxyUsername;
@property(retain) NSString * proxyPassword;
@property(retain) NSString * proxyPACURLString;
@property BOOL proxyPACFallbackAllowed;
@property(retain) NSString * credentialUUID;
@property BOOL isHotspot;
@property(retain) NSNumber * priority;
@property(retain) NSString * domainName;
@property(retain) NSString * HESSID;
@property(getter=isServiceProviderRoamingEnabled) BOOL serviceProviderRoamingEnabled;
@property(retain) NSArray * roamingConsortiumOIs;
@property(retain) NSArray * NAIRealmNames;
@property(retain) NSArray * MCCAndMNCs;
@property(retain) NSString * displayedOperatorName;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setDomainName:(id)arg1;
- (void)setEncryptionType:(id)arg1;
- (void)setDisplayedOperatorName:(id)arg1;
- (void)setServiceProviderRoamingEnabled:(BOOL)arg1;
- (void)setHESSID:(id)arg1;
- (void)setIsHotspot:(BOOL)arg1;
- (void)setCredentialUUID:(id)arg1;
- (id)credentialUUID;
- (void)setProxyPACFallbackAllowed:(BOOL)arg1;
- (void)setProxyPACURLString:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (void)setProxyUsername:(id)arg1;
- (void)setProxyServerPort:(id)arg1;
- (void)setPayloadCertificateAnchorUUID:(id)arg1;
- (id)payloadCertificateAnchorUUID;
- (void)setCertificateUUID:(id)arg1;
- (id)certificateUUID;
- (void)setAutoJoin:(BOOL)arg1;
- (BOOL)autoJoin;
- (void)setUsernameRequired:(BOOL)arg1;
- (BOOL)usernameRequired;
- (void)setPasswordRequired:(BOOL)arg1;
- (BOOL)passwordRequired;
- (void)setIsWPA:(BOOL)arg1;
- (BOOL)isWPA;
- (void)setIsWEP:(BOOL)arg1;
- (BOOL)isWEP;
- (void)setSsid:(id)arg1;
- (BOOL)proxyPACFallbackAllowed;
- (id)proxyPACURLString;
- (id)proxyPassword;
- (id)proxyUsername;
- (id)proxyServerPort;
- (id)eapClientConfig;
- (id)encryptionType;
- (id)displayedOperatorName;
- (BOOL)isServiceProviderRoamingEnabled;
- (id)HESSID;
- (void)setMCCAndMNCs:(id)arg1;
- (id)MCCAndMNCs;
- (void)setNAIRealmNames:(id)arg1;
- (id)NAIRealmNames;
- (void)setRoamingConsortiumOIs:(id)arg1;
- (id)roamingConsortiumOIs;
- (id)domainName;
- (BOOL)isHotspot;
- (id)ssid;
- (void)setProxyType:(int)arg1;
- (void)setEapClientConfig:(id)arg1;
- (BOOL)_isEAPSIMConfig:(id)arg1;
- (id)_eapPasswordFromConfig:(id)arg1 isRequired:(BOOL*)arg2;
- (id)_eapUsernameFromConfig:(id)arg1 isRequired:(BOOL*)arg2;
- (BOOL)_eapConfigIsValid:(id)arg1 error:(id*)arg2;
- (void)setProxyServer:(id)arg1;
- (id)proxyServer;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (BOOL)isHidden;
- (id)password;
- (void).cxx_destruct;
- (id)description;
- (void)setIsHidden:(BOOL)arg1;
- (void)setPriority:(id)arg1;
- (id)priority;
- (int)proxyType;

@end