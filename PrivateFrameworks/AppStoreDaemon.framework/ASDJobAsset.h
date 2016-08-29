/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobAsset : NSObject <NSCopying, NSSecureCoding> {
    NSString * _assetType;
    NSString * _assetURL;
    NSData * _dPInfo;
    NSData * _hashArrayData;
    NSNumber * _initialODRSize;
    bool  _isExternal;
    bool  _isLocallyCacheable;
    bool  _isZipStreamable;
    NSNumber * _numberOfBytesToHash;
    NSArray * _sinfs;
    NSString * _variantID;
}

@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, copy) NSString *assetURL;
@property (nonatomic, copy) NSData *dPInfo;
@property (nonatomic, copy) NSData *hashArrayData;
@property (nonatomic, copy) NSNumber *initialODRSize;
@property (nonatomic) bool isExternal;
@property (nonatomic) bool isLocallyCacheable;
@property (nonatomic) bool isZipStreamable;
@property (nonatomic, copy) NSNumber *numberOfBytesToHash;
@property (nonatomic, copy) NSArray *sinfs;
@property (nonatomic, copy) NSString *variantID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetType;
- (id)assetURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dPInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)hashArrayData;
- (id)initWithCoder:(id)arg1;
- (id)initialODRSize;
- (bool)isExternal;
- (bool)isLocallyCacheable;
- (bool)isZipStreamable;
- (id)numberOfBytesToHash;
- (void)setAssetType:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setDPInfo:(id)arg1;
- (void)setHashArrayData:(id)arg1;
- (void)setInitialODRSize:(id)arg1;
- (void)setIsExternal:(bool)arg1;
- (void)setIsLocallyCacheable:(bool)arg1;
- (void)setIsZipStreamable:(bool)arg1;
- (void)setNumberOfBytesToHash:(id)arg1;
- (void)setSinfs:(id)arg1;
- (void)setVariantID:(id)arg1;
- (id)sinfs;
- (id)variantID;

@end