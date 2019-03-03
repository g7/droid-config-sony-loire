%define rpm_vendor qualcomm

%define vendor_pretty Sony

%define out_of_image_files 1
%define provides_own_board_mapping 1

# Device-specific ofono configuration
Provides: ofono-configs

# Device-specific usb-moded configuration
Provides: usb-moded-configs

